<!-- inserts the record selection description for the current page -->
<div class="active-records">
	<!--4DIF ((lPerPage > 1) & (lRecords > 1))-->
		records {Current Record} to {Last Record} of {Records}
	<!--4DELSE-->
		record {Current Record} of {Records}
	<!--4DENDIF-->
</div>