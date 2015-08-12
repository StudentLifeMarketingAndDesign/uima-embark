<li class="justify-item">
    <a href="{Object Info}"><div class="collection-box" style="background-image: url({preview});">
        
    </div></a>
    <div class="portfolio-record-box">
        <!-- <div class="portfolio-thumbnail">{If(Has Image)}<a href="{Object Info}" onmouseover="self.status = 'Display Object Description';return true"
                            onmouseout="self.status = '';return true" title="Display Object Description"><img src="{thumbnail}"
                        height="{thumbnail height*.7}" width="{thumbnail width*.7}" alt=""/></a>{Else}<img src="/graphics/DefaultThumbnail.gif" alt=""/>{EndIf}
        </div>-->
        <div class="portfolio-label">
            {If([Objects_1]Disp_Title!="")}<a href="{Object Info}" onmouseover="self.status = 'Display Object Description';return true" onmouseout="self.status = '';return true" title="Display Object Description"><i>{[Objects_1]Disp_Title}</i></a><br/>{End If}
            {If([Objects_1]Disp_Maker_1!="")}<a href="{Artist Info}">{[Objects_1]Disp_Maker_1}</a><br/>{End If}
            {If([Objects_1]Disp_Create_DT!="")}{[Objects_1]Disp_Create_DT}<br/>{End If}
            {If([Objects_1]Disp_Medium!="")}{[Objects_1]Disp_Medium}<br/>{End If}
            {If([Objects_1]Creation_Place3!="")}{[Objects_1]Creation_Place3}<br/>{End If}
            {If(Logged In)}
            <span class="smalltxt">
            <a href="javascript:addToPort({SessionID},'&x={Sequence}',{_ID});">Add to portfolio</a>&nbsp;&gt;
            {if(Editing Portfolio)}<br/>
            &lt;&nbsp;<a href="{RemoveFromPortfolio}&display=POR">Remove from portfolio</a>
            {end if}
            </span>
            {End If}
        </div>
    </div>
</li>