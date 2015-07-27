<!-- inserts the record selection description for the current page -->
<div class="active-records">
	<!--4DIF ((lPerPage > 1) & (lRecords > 1))-->
		results {Current Record}-{Last Record} of {Records}
	<!--4DELSE-->
		results {Current Record} of {Records}
	<!--4DENDIF-->
</div>