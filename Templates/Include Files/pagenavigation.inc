<div id="PageNumbers">
    <ul class="pagination">

         <!--4DIF (HasPrevious=TRUE)-->
            <li class="arrow">
                <a href="{First Page}" title="View the first page">« First page</a>
             </li>
            <li class="arrow">
                <a href="{Previous}" title="View the previous page">« Previous page</a>
             </li>
         <!--4DELSE-->

         <!--4DENDIF-->

         <!--4DIF (HasNext)-->
            <li class="arrow">
                <a href="{Next}" title="View the next page">Next page »</a>
             </li>
            <li class="arrow">
                <a href="{Last Page}" title="View the last page">Last page »</a>
             </li>
        <!--4DELSE-->

        <!--4DENDIF-->

    </ul>
    <p>{Include activerecords.inc}</p>
    </div><!-- start pagenavigation -->
   