#ifndef GLOBAL_H 
#define GLOBAL_H

/*
 * Squashfs
 *
 * Copyright (c) 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
 * Phillip Lougher <phillip@lougher.demon.co.uk>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * global.h
 */

typedef struct squashfs_super_block squashfs_super_block;
typedef struct squashfs_base_inode_header squashfs_base_inode_header;
typedef struct squashfs_symlink_inode_header squashfs_symlink_inode_header;
typedef struct squashfs_reg_inode_header squashfs_reg_inode_header;
typedef struct squashfs_lreg_inode_header squashfs_lreg_inode_header;
typedef struct squashfs_dir_inode_header squashfs_dir_inode_header;
typedef struct squashfs_ldir_inode_header squashfs_ldir_inode_header;
typedef struct squashfs_dir_entry squashfs_dir_entry;
#endif
