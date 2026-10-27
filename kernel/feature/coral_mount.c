// SPDX-License-Identifier: GPL-2.0-only
#include <linux/cred.h>
#include "selinux/selinux.h"

/* Bridge required by Coral's already-imported mount allocator. Do not equate
 * UID 0 with the KernelSU domain: init/vold mounts must remain ordinary mounts.
 * No userspace ABI or manager signature changes are introduced here.
 */
bool susfs_is_current_ksu_domain(void)
{
	return is_ksu_domain();
}
