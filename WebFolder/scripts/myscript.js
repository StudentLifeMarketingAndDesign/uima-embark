$(document).ready(function(){
	jQuery('.globalizeDate').each(function(){
		var globalDate = Globalize.parseDate(jQuery(this).text());
		var formattedDate = Globalize.format(globalDate, 'd');
		jQuery(this).html(String(formattedDate)); 
		//jQuery(this).html(String(globalDate, '', ''));
	})
});	

