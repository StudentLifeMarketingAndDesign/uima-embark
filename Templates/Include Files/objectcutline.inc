			{if([Objects_1]Object Description!="")}{[Objects_1]Object Description}{end if}
					{Start Loop [Object_Artist]}
						<h1 class="art-title"><a href="{Artist Info}">{[Artist_Maker]Display_Name}</a></h1>
						{if ([Artist_Maker]Alt_Name != "")}<a href="{Artist Info}">Also known as: {[Artist_Maker]Alt_Name}</a>{end if}
						<!-- {Concat("; ", [Artist_Maker]Start_Date_Disp, [Artist_Maker]Birth_Place)}<br> -->
						<div class="cutline">
						{if ([Artist_Maker]Nat_Culture_L3 != "")}{[Artist_Maker]Nat_Culture_L3}<br>{end if}
						{Concat(" - ", [Artist_Maker]Start_Date_Disp, [Artist_Maker]End_Date_Disp)}<br>
						{if ([Object_Artist]Role != "")}
							{concat(", ", [Object_Artist]Role, [Object_Artist]Place, [Object_Artist]Disp_Cont_Date)}
							{end if}
						</div>
					{End Loop}
					<br />
					<div class="cutline">
					<!-- label copy start -->
					{if([Objects_1]Attribution != "")}
						<em>{[Objects_1]Attribution}</em><br>
					{end if}

					{if([Objects_1]Whole=="No")}
						<i><b>{[Objects_1]Disp_Title}</b></i>
					{else}
						<b>{[Objects_1]Disp_Title}</b>
					{end if}<br>

					{if([Objects_1]Disp_Create_DT!="")}{[Objects_1]Disp_Create_DT}<br>{end if}
					{if([Objects_1]Disp_Medium!="")}{[Objects_1]Disp_Medium}<br>{end if}
					{if([Objects_1]Disp_Dimen!="")}{[Objects_1]Disp_Dimen}<br>{end if}
					{Concat(", ", [Objects_1]Dedication, [Objects_1]Disp_Access_No)}
					<!-- label copy end -->
					</div>