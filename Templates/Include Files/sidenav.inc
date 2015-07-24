<div class="side-navigation">
		<!--
			
				<h3 class="section-title">About</h3>
			
		-->
<!--		<div class="menu-item"><form name="searchForm" id="searchForm" action="/4DACTION/HANDLECGI/CTN3" method="post">
				<input type="hidden" name="sid" value="{SessionID}"/>
				<input type="hidden" name="SearchType" value="all"/>
				<input type="hidden" name="WholeWord" value="0"/>
				<input type="hidden" name="RefineSearch" value="NewSelection"/>

				<input type="text" name="theKW" size="10" style="background-color: #CCCCCC; width: 85;"/>
				<input type="button" onclick="document.searchForm.submit()" value="search">
		</form></div>

		<div class="menu-item" id="home" onmouseover="menuOn('home');" onmouseout="menuOff('home');" onclick="document.location='/';"><a href="/?sid={SessionId}&x={Sequence}">Home</a></div>

		<div class="menu-item" id="collections" onmouseover="menuOn('collections');" onmouseout="menuOff('collections');" onclick="document.location='/IT_-1?sid={SessionId}&x={Sequence}';"><a href="/IT_-1?sid={SessionId}&x={Sequence}">Browse</a></div>

		<div class="menu-item" id="search" onmouseover="menuOn('search');" onmouseout="menuOff('search');" onclick="document.location='/kiosk/search.htm?sid={SessionId}&x={Sequence}';"><a href="/kiosk/search.htm?sid={SessionId}&x={Sequence}">Search</a></div>

		<div class="menu-item" id="help" onmouseover="menuOn('help');" onmouseout="menuOff('help');"><a href="/kiosk/help.htm" target="_blank">Help</a></div>-->
		
		<nav class="sec-nav" aria-label="Secondary">
			<form name="searchForm" id="searchForm" action="/4DACTION/HANDLECGI/CTN3" method="post">
					<input type="hidden" name="sid" value="{SessionID}"/>
					<input type="hidden" name="SearchType" value="all"/>
					<input type="hidden" name="WholeWord" value="0"/>
					<input type="hidden" name="RefineSearch" value="NewSelection"/>

					<input type="text" name="theKW" size="10" style="background-color: #CCCCCC; width: 85;"/>
					<input type="button" onclick="document.searchForm.submit()" value="search">
			</form>
			<ul class="first-level">
				<li class="active"><a href="/">Collections Home</a></li>
				<li><a href="/IT_-1?sid={SessionId}&x={Sequence}">Browse Collections</a></li>
				<li><a href="/kiosk/search.htm?sid={SessionId}&x={Sequence}">Advanced Search</a></li>
				<li><a href="/kiosk/help.htm">Help</a></li>
			</ul>
		</nav>
	</div>