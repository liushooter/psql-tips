    <div class="tip">
	  the <code>n</code> modifier appended to the <code>dP</code> metacommand will list also
	  non-root partitioned tables and ndexes. A column displaying also the
	  parent name is added to teh result.
      <pre><code class="hljs bash">laetitia=# \dPn
                                List of partitioned relations
 Schema |         Name          |  Owner   |       Type        | Parent name |     Table      
--------+-----------------------+----------+-------------------+-------------+----------------
 public | partition_test        | laetitia | partitioned table |             | 
 public | partition_test_id_idx | laetitia | partitioned index |             | partition_test
(2 rows)

laetitia=# \dPn+
                                                         List of partitioned relations
 Schema |         Name          |  Owner   |       Type        | Parent name |     Table      | Leaf partition size | Total size | Description 
--------+-----------------------+----------+-------------------+-------------+----------------+---------------------+------------+-------------
 public | partition_test        | laetitia | partitioned table |             |                | 8192 bytes          | 8192 bytes | 
 public | partition_test_id_idx | laetitia | partitioned index |             | partition_test | 8192 bytes          | 8192 bytes | 
(2 rows)</code></pre>This feature is available
since Postgres 12.
	</div>
