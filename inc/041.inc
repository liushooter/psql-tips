    <div class="tip" name="41">
      The <code>-W</code> or <code>--password</code> will force
      psql to prompt for a password before connecting to a
      database, even if the password will not be used.<br>
      <br>
      If the server requires a password, psql will waste a
      connection attempt finding out that the server wants a
      password. In some cases it is worth typing <code>-W</code> to
      avoid the extra connection attempt.
      <pre><code class=
      "hljs bash">laetitia:~$ sudo cat /usr/local/pgsql/data/pg_hba.conf
# TYPE  DATABASE        USER            ADDRESS                 METHOD

# "local" is for Unix domain socket connections only
local   all             all                                     trust
# IPv4 local connections:
host    all             all             127.0.0.1/32            trust
# IPv6 local connections:
host    all             all             ::1/128                 trust
# Allow replication connections from localhost, by a user with the
# replication privilege.
local   replication     all                                     trust
host    replication     all             127.0.0.1/32            trust
host    replication     all             ::1/128                 trust
laetitia:~$ psql -W
Password: 
psql (14devel)
Type "help" for help.

laetitia=#</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
