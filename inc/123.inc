    <div class="tip">The <code> \ev view</code> metacommand will open the <code>create or
	replace view</code> containing the SQL code of
	the view you named.<br/><br/>
      <pre><code class="hljs bash">laetitia=# \dv connection_settings
               List of relations
 Schema |        Name         | Type |  Owner
--------+---------------------+------+----------
 public | connection_settings | view | laetitia
(1 row)

laetitia=# \ev connection_settings
laetitia=# CREATE OR REPLACE VIEW public.connection_settings AS
 SELECT pg_settings.name,
    pg_settings.setting,
    pg_settings.unit
   FROM pg_settings
  WHERE pg_settings.name ~ 'connection'::text</code></pre>This feature is available
since Postgres 8.4. Procedures were added with Postgres 11.
	</div>
