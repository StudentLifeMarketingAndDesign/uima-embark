$(document).ready(function() {

	// add js class to body if javascript enabled
	$('html').removeClass('no-js');

	// $('.main-nav').setup_navigation();

	// Shifter
	$.shifter({
		maxWidth: "767px"
	});

	// Naver
	$(".naver").naver();

	// POPUP WINDOW FOR SOCIAL MEDIA
	function windowPopup(url, width, height) {
		// Calculate the position of the popup so
		// it’s centered on the screen.
		var left = (screen.width / 2) - (width / 2),
			top = (screen.height / 2) - (height / 2);

		window.open(
			url,
			"",
			"menubar=no,toolbar=no,resizable=yes,scrollbars=yes,width=" + width + ",height=" + height + ",top=" + top + ",left=" + left
		);
	}

	// Lightbox
	$(".lightbox").lightbox({
		mobile: true
	});

	// Tooltip
	$(".tooltip").tooltip({
		direction: "top"
	});

	//jQuery
	$(".js-social-share").on("click", function(e) {
		e.preventDefault();
		windowPopup($(this).attr("href"), 500, 300);
	});

	// Vanilla JavaScript
	var jsSocialShares = document.querySelectorAll(".js-social-share");
	if (jsSocialShares) {
		[].forEach.call(jsSocialShares, function(anchor) {
		anchor.addEventListener("click", function(e) {
			e.preventDefault();
			windowPopup(this.href, 500, 300);
		 });
	  });
	}
	// END POPUP WINDOW FOR SOCIAL MEDIA

	//START RANGE SLIDER


	var range_test = {
		'min': [   1 ],
		'1%': [1,  99 ],
		'11%' : [100, 150],
		'22%': [250, 250 ],
		'33%' : [ 500, 500],
		'44%' : [1000, 1500],
		'55%' : [2500, 2500],
		'66%' : [5000, 5000],
		'77%' : [10000, 10000],
		'max': [ 30000 ]
	};


	$("#slider-range").noUiSlider({

		connect: "lower",
		start: 1,
		range: range_test,
		format: wNumb({
			decimals: 0
		})
	})

	$('#slider-range').noUiSlider_pips({
		mode: 'values',
		density: 10,
		values: [1, 100, 250, 500, 1000, 2500, 5000, 10000, 20000, 30000],
		format: wNumb({
			decimals: 0,
			prefix: '$',
			thousand: ','
		})
	});
	$('#myTab a').click(function (e) {
	  e.preventDefault()
	  $(this).tab('show')
	})
	$("#slider-range").on('set', function(){
			// The slider is the scope, so:
			// $(this) == $('#slider')
			val = $(this).val();
			tab = $("#myTab a[data-donate='"+val+"']");
			console.log(tab);
			//alert('wake up');
			$(tab).tab('show');
		}
	);

	$('.noUi-value').click(function (e) {
	  e.preventDefault();
	  var value = $(this).text();

	  value = value.replace('$','');
	  tab = $("#myTab a[data-donate='"+value+"']");


	  $(tab).tab('show');
	  $("#slider-range").val(value);
	});

	$(".noUi-value").filter(function(index, element){
	    return index % 2 == 1;
	}).addClass("odd");

	$(".noUi-handle").append("<a href='join'></a>");
	//END RANGE SLIDER

});
