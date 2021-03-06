/* GIO - GLib Input, Output and Streaming Library
 *
 * Copyright (C) 2010 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __G_PROXY_RESOLVER_GNOME_H__
#define __G_PROXY_RESOLVER_GNOME_H__

#include <glib-object.h>
#include <gio/gio.h>

G_BEGIN_DECLS

#define G_TYPE_PROXY_RESOLVER_GNOME         (g_proxy_resolver_gnome_get_type ())
#define G_PROXY_RESOLVER_GNOME(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_PROXY_RESOLVER_GNOME, GProxyResolverGnome))
#define G_PROXY_RESOLVER_GNOME_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_PROXY_RESOLVER_GNOME, GProxyResolverGnomeClass))
#define G_IS_PROXY_RESOLVER_GNOME(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_PROXY_RESOLVER_GNOME))
#define G_IS_PROXY_RESOLVER_GNOME_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_PROXY_RESOLVER_GNOME))
#define G_PROXY_RESOLVER_GNOME_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_PROXY_RESOLVER_GNOME, GProxyResolverGnomeClass))

typedef struct _GProxyResolverGnome       GProxyResolverGnome;
typedef struct _GProxyResolverGnomeClass  GProxyResolverGnomeClass;

struct _GProxyResolverGnomeClass {
  GObjectClass parent_class;
};

GType g_proxy_resolver_gnome_get_type (void);
void  g_proxy_resolver_gnome_register (GIOModule *module);

G_END_DECLS

#endif /* __G_PROXY_RESOLVER_GNOME_H__ */
