    <div class="tip">
	  <code>\dP</code> will display a list of partitioned tables and indexes.
	  <code>\dP pattern</code> will list partitioned tables and indexes
	  matching the pattern.
	  The <code>&#43;</code> modifier will also display the size and the
	  description.
      <pre><code class="hljs bash">laetitia=# \dP
                         List of partitioned relations
 Schema |         Name          |  Owner   |       Type        |     Table      
--------+-----------------------+----------+-------------------+----------------
 public | partition_test        | laetitia | partitioned table | 
 public | partition_test_id_idx | laetitia | partitioned index | partition_test
(2 rows)

laetitia=# \dP+
                                       List of partitioned relations
 Schema |         Name          |  Owner   |       Type        |     Table      | Total size | Description 
--------+-----------------------+----------+-------------------+----------------+------------+-------------
 public | partition_test        | laetitia | partitioned table |                | 8192 bytes | 
 public | partition_test_id_idx | laetitia | partitioned index | partition_test | 8192 bytes | 
(2 rows)</code></pre>This feature is available
since Postgres 12.
	</div>
