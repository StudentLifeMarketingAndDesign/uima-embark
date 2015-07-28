<!-- inserts the record selection description for the current page -->
<div class="active-records">
	<!--4DIF ((lPerPage > 1) & (lRecords > 1))-->
		Results <strong>{Current Record}-{Last Record}</strong> of {Records}
	<!--4DELSE-->
		Results <strong>{Current Record} of {Records}</strong>
	<!--4DENDIF-->
</div>