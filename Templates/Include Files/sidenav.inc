<div class="naver">
    <div class="side-navigation">

        <nav class="sec-nav fs-navigation-element fs-navigation-toggle-nav fs-navigation__0" aria-label="Secondary" data-navigation-handle="#handle">
            <ul class="first-level">
            	<!--<li><a href="/">Home</a></li>-->


               
                
                <li><a href="/IT_-1?sid={SessionId}&x={Sequence}">Browse collections</a>
                    <ul class="second-level">
                        <li><a href="/kiosk/browseartist.htm?sid={SessionId}&x={Sequence}">Browse by artist</a></li>
                        <li><a href="/kiosk/browseGeography.htm?sid={SessionId}&x={Sequence}">Browse by geography</a></li>
                        <li><a href="/kiosk/browseCategory.htm?sid={SessionId}&x={Sequence}">Browse by curatorial category</a></li>
                    </ul>
                </li>
                <li><div class="search-bar" role="search">
                    <form id="SearchForm_SearchForm" name="searchForm"  action="/4DACTION/HANDLECGI/CTN3" method="post">
                        <input type="hidden" name="sid" value="{SessionID}"/>
                        <input type="hidden" name="SearchType" value="all"/>
                        <input type="hidden" name="WholeWord" value="0"/>
                        <input type="hidden" name="RefineSearch" value="NewSelection"/>
                        <p id="SearchForm_SearchForm_error" class="message " style="display: none"></p>
                        <fieldset>
                            <div id="Search" class="field text nolabel">
                                <div class="middleColumn">
                                    <label for="SearchForm_SearchForm_Search" class="visuallyhidden">Search</label>
                                    <input type="search" name="theKW" size="10" placeholder="Search" class="text nolabel" id="SearchForm_SearchForm_Search">
                                </div>
                            </div>
                            <input type="submit" name="action_results" value="Go" class="action" id="SearchForm_SearchForm_action_results">
                        </fieldset>
                    </form>
                </div>
                <ul class="second-level">
                    <li><a href="/kiosk/search.htm?sid={SessionId}&x={Sequence}">Advanced search</a></li> 
                </ul>
                 </li>
               
                <li><a href="/kiosk/help.htm">Help</a>
                    <ul class="second-level">
                        <li><a href="/">About the online collections</a></li>
                    </ul>
                </li>
                

            </ul>
        </nav>
    </div>
</div>