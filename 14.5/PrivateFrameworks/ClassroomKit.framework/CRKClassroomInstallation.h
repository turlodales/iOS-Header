//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface CRKClassroomInstallation : NSObject <NSCopying>
{
    NSURL *_classroomURL;
    NSString *_classroomBundleIdentifier;
    NSString *_instructorKitImagePath;
    NSString *_instructordBundleIdentifier;
}

+ (id)instructorKitImagePathInBundle:(id)arg1 hasContentsFolder:(_Bool)arg2;
+ (_Bool)anyInstallationExists;
+ (id)preferredInstallation;
+ (id)installationWithClassroomBundleIdentifier:(id)arg1 bundleHasContentsFolder:(_Bool)arg2 instructordBundleIdentifier:(id)arg3;
+ (id)macCatalystInstallation;
+ (id)nativeMacOSInstallation;
+ (id)iOSInstallation;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *instructordBundleIdentifier; // @synthesize instructordBundleIdentifier=_instructordBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *instructorKitImagePath; // @synthesize instructorKitImagePath=_instructorKitImagePath;
@property(readonly, copy, nonatomic) NSString *classroomBundleIdentifier; // @synthesize classroomBundleIdentifier=_classroomBundleIdentifier;
@property(readonly, nonatomic) NSURL *classroomURL; // @synthesize classroomURL=_classroomURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithClassroomURL:(id)arg1 classroomBundleIdentifier:(id)arg2 instructorKitImagePath:(id)arg3 instructordBundleIdentifier:(id)arg4;

@end

