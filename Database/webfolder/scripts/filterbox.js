$(function(){

		
	var $lockFilter = false;


	//When a user clicks on the Filter box title, lock it open.
	$("#filterBox #title").toggle(
		function() {
			$lockFilter = true;
		}, function() {
			$lockFilter = true;
		}
	);



	$("#filterBox").hover(
		function() {
			$("#filterFields").show();
			$('#triangle').attr('src', '/Graphics/carat-down.jpg');
		}, function() {
			if( $lockFilter != true ) {
				$("#filterFields").hide();
				$('#triangle').attr('src', '/Graphics/carat-right.jpg');
			}
		}
	);

	$(".fieldName").toggle(
		function() {
			$("#"+this.id+"Values").show();
			$("#"+this.id).addClass("field-hover");
		}, function() {
			$("#"+this.id+"Values").hide();
		}
	);
	
		
		
	$(".fieldName").hover(
		function() {
			if( $("#"+this.id+"Values").css("display") == "none" ) {
				$("#"+this.id).addClass("field-hover");
			}
		}, function() {
			if( $("#"+this.id+"Values").css("display") == "none" ) {
				$("#"+this.id).removeClass("field-hover");
			}
		}
	);
});
