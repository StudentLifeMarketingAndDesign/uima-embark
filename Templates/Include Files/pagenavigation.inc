<!-- start pagenavigation -->

<!-- draws next/previous links at the top of every page that has a record selection -->

<p class="err">{Message}</p>

<div class="page-nav">
    <div class="page-nav-left navtxt">
        <!--4DIF (HasPrevious=TRUE)-->
            &lt;&lt;<a href="{First Page}">first</a>
            &lt;<a href="{Previous}">previous</a>
        <!--4DELSE-->
            &lt;&lt;first
            &lt;previous
        <!--4DENDIF-->
    </div>

    <div class="page-nav-right navtxt">
        <!--4DIF (HasNext)-->
            <!-- start active next/last links -->
                <a href="{Next}">next</a>&gt;
                <a href="{Last Page}">last</a>&gt;&gt;
            <!-- end active next/last links -->
        <!--4DELSE-->
            <!-- start inactive next/last links -->
                next&gt;
                last&gt;&gt;
            <!-- end inactive next/last links -->
        <!--4DENDIF-->
    </div>
</div>

<!-- end pagenavigation -->