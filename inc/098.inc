    <div class="tip">
	  the <code>i</code> modifier appended to the <code>dP</code> metacommand will list only
	  partitioned indexes.
      <pre><code class="hljs bash">ilaetitia=# \dPi
                List of partitioned indexes
 Schema |         Name          |  Owner   |     Table      
--------+-----------------------+----------+----------------
 public | partition_test_id_idx | laetitia | partition_test
(1 row)</code></pre>This feature is available
since Postgres 12.
	</div>
