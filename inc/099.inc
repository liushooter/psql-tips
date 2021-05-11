    <div class="tip">
	  the <code>t</code> modifier appended to the <code>dP</code> metacommand will list only
	  partitioned tables.
      <pre><code class="hljs bash">laetitia=# \dPt
     List of partitioned tables
 Schema |      Name      |  Owner   
--------+----------------+----------
 public | partition_test | laetitia
(1 row)

laetitia=# \dPt+
                  List of partitioned tables
 Schema |      Name      |  Owner   | Total size | Description 
--------+----------------+----------+------------+-------------
 public | partition_test | laetitia | 8192 bytes | 
(1 row)</code></pre>This feature is available
since Postgres 12.
	</div>
