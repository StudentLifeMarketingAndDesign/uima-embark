
	<script src="//ajax.googleapis.com/ajax/libs/jquery/1.10.1/jquery.min.js"></script>
    <script src="//code.jquery.com/jquery-migrate-1.2.1.min.js"></script>
   <!-- <script type="text/javascript" src="//e.issuu.com/embed.js" async="true"></script>-->
    <script src="/js/build/production.js"></script>


	<script type="text/javascript" src="/scripts/globalize.js"></script>
	<!--<script type="text/javascript" src="/scripts/filterbox.js"></script>-->
	<script type="text/javascript" src="/scripts/myscript.js"></script>
	<script type="text/javascript" src="/scripts/jquery.gridly.js"></script>

    	<script type="text/javascript">
	<!--
		console.log(jQuery);
        function getStyleObj (obj) {
            // returns a 'style' object that's properly formatted for the user's browser
            if(is.ns5) {
                styleObj = document.getElementById(obj).style;
            }
            else if(is.ie) {
                styleObj = eval("document.all." + obj + ".style");
            }
            else if(is.ns) {
                styleObj = eval("document." + obj);
            }

            return styleObj;
        }

        function menuOn(selMenu) {
            // Change the background color of selMenu on mouse rollover.
            var obj = getStyleObj(selMenu);
            obj.backgroundColor ="#000";
            //this color corresponds to the .menu a:hover bgcolor set in kioskstyles.css
        }

        function menuOff(selMenu) {
            // Remove the background color of selMenu on mouse rollout.
            if(currentMenu == selMenu) {
                // this is the 'current' menu; it should continue to look selected;
                setMenu(selMenu);
            } else {
                var obj = getStyleObj(selMenu);
                obj.backgroundColor ="";
            }
        }

        var currentMenu = "";

        function setMenu(selMenu) {
            // Changes the background color of the selected menu
            // This function is called in the 'onload' script of <body> tags.
            currentMenu = selMenu;
            var obj = getStyleObj(selMenu);
            obj.backgroundColor ="#666666";
        }

        function showHelp(theURL) {
            theURL = '/Help/'+theURL+'.htm';
            var newWindow = window.open(theURL,'Help','width=300,height=400,scrollbars,resizable');
        }

        function addToPort(SessionID,Sequence,objID) {
            document.theForm.objID.value = objID;
            suffix = "?sid="+SessionID + "&x=" + Sequence;
            var portWind = window.open("/Kiosk/ChoosePort.htm"+suffix,"ChoosePort","height=150,width=300")
        }

        function addIDs() {
            document.theForm.action = document.theForm.action+document.theForm.portID.value+"*"+document.theForm.objID.value+suffix;
            document.theForm.submit();
        }


    </script>
    <!-- end scripts -->