    <div class="tip">
	  <code>\dp</code> will display a list of tables, views and sequences
	  with their associated access privileges.
	  <code>\dp pattern</code> will list
	  only tables, views and sequences whose names match the pattern are listed.
      The access privileges column signification is explained in <a href="https://www.postgresql.org/docs/current/ddl-priv.html#PRIVILEGES-SUMMARY-TABLE">table 5.2</a>.
      <pre><code class="hljs bash">ilaetitia=# \dp
                                               Access privileges
 Schema |         Name          |       Type        |     Access privileges     | Column privileges | Policies 
--------+-----------------------+-------------------+---------------------------+-------------------+----------
 public | animal                | table             |                           |                   | 
 public | first_partition       | table             |                           |                   | 
 public | logs                  | foreign table     |                           |                   | 
 public | mymv                  | materialized view |                           |                   | 
 public | mytest                | table             |                           |                   | 
 public | mytest_id_seq         | sequence          |                           |                   | 
 public | myview                | view              |                           |                   | 
 public | partition_test        | partitioned table |                           |                   | 
 public | partition_test_id_seq | sequence          |                           |                   | 
 public | test                  | table             | laetitia=arwdDxt/laetitia |                   | 
 public | test_id_seq           | sequence          |                           |                   | 
(11 rows)</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
