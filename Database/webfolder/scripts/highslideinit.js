/*


		hs.graphicsDir = '/highslide/graphics/';
		hs.wrapperClassName = 'borderless';
//		
//		
//		
//		hs.useControls = true;
*/
hs.registerOverlay({
	html: '<div class="closebutton" onclick="return hs.close(this)" title="Close"></div>',
	position: 'top right',
	fade: 2 // fading the semi-transparent overlay looks bad in IE
});


hs.graphicsDir = '/scripts/highslide/graphics/';
/*
hs.wrapperClassName = 'borderless';
hs.dimmingOpacity = 0.50;
hs.showCredits = false;
hs.align = 'center';
hs.outlineType = 'rounded-white';
hs.useControls = false;
*/

hs.outlineType = 'rounded-white';
hs.showCredits = false;
hs.align = 'center';
hs.preserveContent = false;
hs.width = 420;
hs.useControls = false;
hs.anchor = 'left';
hs.dimmingOpacity = 0.50;
//hs.allowMultipleInstances = false;
hs.__ = {
	paramIframe: {contentId: 'hs_content_wrap', objectType: 'iframe'}
	,paramGallery: {slideshowGroup: 'gallery', useControls: true}
}
if (hs.addSlideshow) hs.addSlideshow({
    slideshowGroup: 'gallery',
    interval: 5000,
    repeat: false,
    useControls: true,
    overlayOptions: {
    	className: 'text-controls',
		position: 'bottom center',
		relativeTo: 'viewport',
		offsetY: -60
	},
	thumbstrip: {
		position: 'bottom center',
		mode: 'horizontal',
		relativeTo: 'viewport'
	}

});