//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudQuotaDaemon/NSCopying-Protocol.h>

@class NSNumber;

@interface ICQDaemonOfferConditions : NSObject <NSCopying>
{
    _Bool _deviceStorageAlmostFull;
    _Bool _photosCloudEnabled;
    _Bool _photosOptimizeEnabled;
    NSNumber *_photosLibrarySize;
}

+ (_Bool)isCachedCloudQuotaAlmostFullOrFull;
+ (_Bool)isDeviceStorageNearLowButNotLow;
+ (void)setSimulatedDeviceStorageAlmostFull:(_Bool)arg1;
+ (_Bool)isSimulatedDeviceStorageAlmostFull;
+ (void)getPhotosLibraryUploadSizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)getPhotosLibrarySizeWithCompletion:(CDUnknownBlockType)arg1;
+ (id)photosVideosCount;
+ (id)photosLibraryUploadSize;
+ (id)photosLibrarySize;
+ (_Bool)isPhotosOptimizeEnabled;
+ (_Bool)hasPhotosCloudEverBeenEnabled;
+ (_Bool)isPhotosCloudEnabled;
+ (_Bool)isDeviceStorageAlmostFull;
+ (id)currentConditions;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *photosLibrarySize; // @synthesize photosLibrarySize=_photosLibrarySize;
@property(nonatomic, getter=isPhotosOptimizeEnabled) _Bool photosOptimizeEnabled; // @synthesize photosOptimizeEnabled=_photosOptimizeEnabled;
@property(nonatomic, getter=isPhotosCloudEnabled) _Bool photosCloudEnabled; // @synthesize photosCloudEnabled=_photosCloudEnabled;
@property(nonatomic, getter=isDeviceStorageAlmostFull) _Bool deviceStorageAlmostFull; // @synthesize deviceStorageAlmostFull=_deviceStorageAlmostFull;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCurrentConditions;

@end

