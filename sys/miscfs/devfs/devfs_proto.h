/* THIS FILE PRODUCED AUTOMATICALLY */
void  devfs_sinit() /*proto*/;
int	dev_finddir(char *orig_path, dn_p dirnode, int create, dn_p *dn_pp) /*proto*/;
int	dev_add_node(char *name, dn_p dirnode, int entrytype, union typeinfo *by, devnm_p *devnm_pp) /*proto*/;
int	dev_remove(devnm_p devbp) /*proto*/;
int	dev_touch(devnm_p key)		/* update the node for this dev */ /*proto*/;
void	devfs_dn_free(dn_p dnp) /*proto*/;
int get_cdev_major_num(caddr_t addr)	/*proto*/;
int get_bdev_major_num(caddr_t addr)	/*proto*/;
int devfs_add_fronts(devnm_p parent,devnm_p child) /*proto*/;
dn_p dev_findfront(dn_p dir,char *name) /*proto*/;
int dev_mk_front(dn_p parent,devnm_p back,devnm_p *devnm_pp , struct devfsmount *dvm) /*proto*/;
int devfs_make_plane(struct devfsmount *devfs_mp_p) /*proto*/;
void  devfs_free_plane(struct devfsmount *devfs_mp_p) /*proto*/;
void devfs_remove_fronts(devnm_p devbp) /*proto*/;
void dev_free_front(devnm_p devfp) /*proto*/;
int devfs_vntodn(struct vnode *vn_p, dn_p *dn_pp) /*proto*/;
int devfs_dntovn(dn_p dnp, struct vnode **vn_pp) /*proto*/;
int devfs_init(void) /*proto*/;
int devfs_mount( struct mount *mp, char *path, caddr_t data, struct nameidata *ndp, struct proc *p) /*proto*/;
int mountdevfs( struct mount *mp, struct proc *p) /*proto*/;
int devfs_start(struct mount *mp, int flags, struct proc *p) /*proto*/;
int devfs_unmount( struct mount *mp, int mntflags, struct proc *p) /*proto*/;
int devfs_root(struct mount *mp, struct vnode **vpp) /*proto*/;
int devfs_quotactl( struct mount *mp, int cmds, uid_t uid, caddr_t arg, struct proc *p) /*proto*/;
int devfs_statfs( struct mount *mp, struct statfs *sbp, struct proc *p) /*proto*/;
int devfs_sync(struct mount *mp, int waitfor,struct ucred *cred,struct proc *p) /*proto*/;
int devfs_vget(struct mount *mp, ino_t ino,struct vnode **vpp) /*proto*/;
int devfs_fhtovp (struct mount *mp, struct fid *fhp, struct mbuf *nam, struct vnode **vpp, int *exflagsp, struct ucred **credanonp) /*proto*/;
int devfs_vptofh (struct vnode *vp, struct fid *fhp) /*proto*/;
void	devfs_dropvnode(dn_p dnp) /*proto*/;
/* THIS FILE PRODUCED AUTOMATICALLY */
/* DO NOT EDIT (see reproto.sh) */
