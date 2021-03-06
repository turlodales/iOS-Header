//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface NMSFTPFile : NSObject <NSCopying>
{
    _Bool _isDirectory;
    NSString *_filename;
    NSDate *_modificationDate;
    NSDate *_lastAccess;
    NSNumber *_fileSize;
    unsigned long long _ownerUserID;
    unsigned long long _ownerGroupID;
    NSString *_permissions;
    unsigned long long _flags;
}

+ (id)fileWithName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *permissions; // @synthesize permissions=_permissions;
@property(nonatomic) unsigned long long ownerGroupID; // @synthesize ownerGroupID=_ownerGroupID;
@property(nonatomic) unsigned long long ownerUserID; // @synthesize ownerUserID=_ownerUserID;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSDate *lastAccess; // @synthesize lastAccess=_lastAccess;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)filetypeletter:(unsigned long long)arg1;
- (id)convertPermissionToSymbolicNotation:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (void)populateValuesFromSFTPAttributes:(struct _LIBSSH2_SFTP_ATTRIBUTES)arg1;
- (id)initWithFilename:(id)arg1;

@end

