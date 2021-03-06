//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>

@class CLLocation, IPAMetadataStateHandler, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSTimeZone, PFTimeZoneLookup;

@interface IPAMetadata : NSObject <NSCopying>
{
    IPAMetadataStateHandler *_stateHandler;
    _Bool _xmpLoaded;
    _Bool _hasLoadedContent;
    struct CGImageSource *_imageSource;
    struct CGImageMetadata *_cgImageMetadata;
    NSData *_imageData;
    NSString *_filePath;
    NSMutableDictionary *_exifProperties;
    NSMutableDictionary *_iptcProperties;
    NSMutableDictionary *_basicProperties;
    NSMutableDictionary *_fileSystemProperties;
    NSMutableDictionary *_customInfo;
    NSMutableDictionary *_cgImageProperties;
    NSDictionary *_audioVideoProperties;
    NSArray *_focusPoints;
    long long _originalOrientation;
    long long _orientation;
    NSArray *_cgImageMetadataProperties;
    PFTimeZoneLookup *_timeZoneLookup;
    NSDate *_timeZoneAdjustedImageDate;
    NSTimeZone *_imageTimeZone;
    NSString *_fileTypeIdentifier;
    CLLocation *_exifLocation;
    struct CGSize _originalUnrotatedSize;
}

+ (id)utiFromFastModernizeVideoMediaWithMetadata:(id)arg1;
+ (id)proxyPropertyListForAVAsset:(id)arg1 reduceMetadata:(_Bool)arg2;
+ (id)metadataIdentifierTypeMapImage;
+ (id)metadataIdentifierTypeMapVideo;
+ (id)metadataIdentifierTypeMapCommon;
+ (id)_getPropertiesFromImageSource:(struct CGImageSource *)arg1 options:(id)arg2;
+ (id)defaultOptionsForCGImageSource;
+ (struct CGImageSource *)newImageSourceForURL:(id)arg1 options:(id)arg2;
+ (struct CGImageSource *)newImageSourceForData:(id)arg1 uti:(id)arg2 options:(id)arg3;
+ (id)loadMetadataForURL:(id)arg1 cacheImageSource:(_Bool)arg2 cacheImageData:(_Bool)arg3 timeZoneLookup:(id)arg4;
+ (void)test_digestedDateTimeExifAttributesFromExif:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *exifLocation; // @synthesize exifLocation=_exifLocation;
@property(retain, nonatomic) NSString *fileTypeIdentifier; // @synthesize fileTypeIdentifier=_fileTypeIdentifier;
@property(retain, nonatomic) NSTimeZone *imageTimeZone; // @synthesize imageTimeZone=_imageTimeZone;
@property(retain, nonatomic) NSDate *timeZoneAdjustedImageDate; // @synthesize timeZoneAdjustedImageDate=_timeZoneAdjustedImageDate;
@property(retain, nonatomic) PFTimeZoneLookup *timeZoneLookup; // @synthesize timeZoneLookup=_timeZoneLookup;
@property(retain, nonatomic) NSArray *cgImageMetadataProperties; // @synthesize cgImageMetadataProperties=_cgImageMetadataProperties;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(nonatomic) struct CGSize originalUnrotatedSize; // @synthesize originalUnrotatedSize=_originalUnrotatedSize;
@property(retain, nonatomic) NSArray *focusPoints; // @synthesize focusPoints=_focusPoints;
@property(retain, nonatomic) NSDictionary *audioVideoProperties; // @synthesize audioVideoProperties=_audioVideoProperties;
@property(retain, nonatomic) NSMutableDictionary *cgImageProperties; // @synthesize cgImageProperties=_cgImageProperties;
@property(nonatomic) _Bool hasLoadedContent; // @synthesize hasLoadedContent=_hasLoadedContent;
@property(nonatomic) _Bool xmpLoaded; // @synthesize xmpLoaded=_xmpLoaded;
@property(retain, nonatomic) NSMutableDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSMutableDictionary *fileSystemProperties; // @synthesize fileSystemProperties=_fileSystemProperties;
@property(retain, nonatomic) NSMutableDictionary *basicProperties; // @synthesize basicProperties=_basicProperties;
@property(retain, nonatomic) NSMutableDictionary *iptcProperties; // @synthesize iptcProperties=_iptcProperties;
@property(retain, nonatomic) NSMutableDictionary *exifProperties; // @synthesize exifProperties=_exifProperties;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (_Bool)convertGPSString:(id)arg1 toLatitude:(id *)arg2 longitude:(id *)arg3;
- (void)dumpXmpProperties;
- (void)restoreImportantMetadataFromPropertySet:(id)arg1 toSidecarSet:(id)arg2;
- (void)mergeMetadataFromFileToSidecarFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ofType:(id)arg3;
- (void)setEncodedAudioVideoData:(id)arg1;
- (void)setEncodedImageData:(id)arg1;
- (id)encodedDataReduceIfLargerThan:(unsigned long long)arg1;
- (id)encodedData;
- (void)audioVideoProxyPropertyListForAsset:(id)arg1 performExport:(_Bool)arg2 atEnd:(CDUnknownBlockType)arg3;
- (void)waitForAsync_setAudioVideoAttributesForAVProxyData:(id)arg1;
- (void)setAudioVideoAttributesForAVProxyData:(id)arg1 readyHandler:(CDUnknownBlockType)arg2;
- (void)_setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 updateCreationDate:(_Bool)arg3 fullMetadata:(_Bool)arg4 readyHandler:(CDUnknownBlockType)arg5;
- (void)setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(_Bool)arg3 readyHandler:(CDUnknownBlockType)arg4;
- (id)exifTimezoneOffsetFromDateString:(id)arg1 offsetInSeconds:(long long *)arg2;
- (void)loadAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(_Bool)arg3;
- (void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(_Bool)arg2;
- (void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1;
- (void)setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(_Bool)arg2 readyHandler:(CDUnknownBlockType)arg3;
- (void)setAudioVideoAttributesFromDictionary:(id)arg1;
- (void)_digestedCollapseArrayExifAttributesFromExif:(id)arg1;
- (void)_digestedGPSExifAttributesFromExif:(id)arg1;
- (void)_digestedAVExifAttributesFromExif:(id)arg1;
- (void)_digestedCameraSettingsExifAttributesFromExif:(id)arg1;
- (void)_digestedDateTimeExifAttributesFromExif:(id)arg1;
- (void)digestedDateTimeExifAttributesFromExif:(id)arg1;
- (void)_digestedOrientationExifAttributesFromExif:(id)arg1;
- (void)_enforceProperFormatting:(id)arg1;
- (id)_digestedExifAttributesFromRawAttributes:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
- (id)_digestedIptcAttributesFromRawAttributes:(id)arg1;
- (void)setCGImageProperties:(id)arg1;
- (id)description;
- (id)jsonFormattedDescriptionWithError:(id *)arg1;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)extractFocusPointsFrom:(id)arg1 orExifAux:(id)arg2;
- (id)iptcPropertyForKey:(id)arg1;
- (void)setIPTCProperty:(id)arg1 forKey:(id)arg2;
- (id)exifPropertyForKey:(id)arg1;
- (void)setExifProperty:(id)arg1 forKey:(id)arg2;
- (id)customPropertyForKey:(id)arg1;
- (void)setCustomProperty:(id)arg1 forKey:(id)arg2;
- (void)setRawFileSystemAttributes:(id)arg1;
- (void)setCustomProperties:(id)arg1;
- (void)mergeMetadata:(id)arg1;
- (void)clearImageAttributes;
@property(readonly, nonatomic) NSString *montageString;
@property(readonly, nonatomic) _Bool isTimelapse;
@property(readonly, nonatomic) _Bool isSDOF;
@property(readonly, nonatomic) _Bool isHDR;
@property(readonly, nonatomic) _Bool isSloMo;
@property(readonly, nonatomic) struct CGImageMetadata *cgImageMetadata; // @synthesize cgImageMetadata=_cgImageMetadata;
@property(readonly, nonatomic) long long customRendered;
@property(readonly, nonatomic) _Bool isDeferredPhotoProxy;
@property(readonly, nonatomic) _Bool isPortrait;
@property(readonly, nonatomic) _Bool isLongExposure;
@property(readonly, nonatomic) _Bool isMirror;
@property(readonly, nonatomic) _Bool isAutoloop;
@property(readonly, nonatomic) unsigned long long playbackVariation;
@property(readonly, nonatomic) _Bool hasCustomRendered;
@property(readonly, nonatomic) _Bool isSpatialOverCapture;
@property(readonly, nonatomic) NSString *spatialOverCaptureIdentifier;
@property(readonly, nonatomic) NSString *artworkContentDescription;
@property(readonly, nonatomic) NSString *captionAbstract;
@property(readonly, nonatomic) NSString *originatingAssetIdentifer;
@property(readonly, nonatomic) NSString *codecFourCharCode;
@property(readonly, nonatomic) NSString *cameraModel;
@property(readonly, nonatomic) NSString *cameraMake;
@property(readonly, nonatomic) double nominalFrameRate;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSString *deferredPhotoProcessingIdentifier;
@property(readonly, nonatomic) NSString *mediaGroupUUID;
@property(readonly, nonatomic) NSString *groupingUuid;
@property(readonly, nonatomic) NSString *burstUuid;
@property(readonly, nonatomic) NSString *exifImageDateTimeString;
@property(readonly, nonatomic) NSNumber *timeZoneOffset;
@property(readonly, nonatomic) NSString *timeZoneName;
@property(readonly, nonatomic) NSDate *imageDate;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)utiForExtension:(id)arg1;
@property(nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
- (void)dealloc;
- (id)initWithPath:(id)arg1 fileData:(id)arg2 uti:(id)arg3 imageSource:(struct CGImageSource *)arg4 cgImageProperties:(id)arg5 options:(id)arg6 loadMinMetadata:(_Bool)arg7 loadXmpData:(_Bool)arg8 xmpSidecarPath:(id)arg9 timeZoneLookup:(id)arg10 cacheImageSource:(_Bool)arg11 cacheImageData:(_Bool)arg12;
- (id)initWithPath:(id)arg1 cgImageProperties:(id)arg2 timeZoneLookup:(id)arg3;
- (id)initWithPath:(id)arg1 imageSource:(struct CGImageSource *)arg2 options:(id)arg3 loadXmpData:(_Bool)arg4 xmpSidecarPath:(id)arg5 timeZoneLookup:(id)arg6 cacheImageSource:(_Bool)arg7 cacheImageData:(_Bool)arg8;
- (id)initWithPath:(id)arg1 fileData:(id)arg2 uti:(id)arg3 options:(id)arg4 loadXmpData:(_Bool)arg5 xmpSidecarPath:(id)arg6 timeZoneLookup:(id)arg7 cacheImageSource:(_Bool)arg8 cacheImageData:(_Bool)arg9;
- (id)initWithPath:(id)arg1 loadMinMetadata:(_Bool)arg2 timeZoneLookup:(id)arg3;
- (id)initWithPath:(id)arg1 options:(id)arg2 timeZoneLookup:(id)arg3;
- (id)initWithTimeZoneLookup:(id)arg1;
- (_Bool)conformsToUTType:(struct __CFString *)arg1 forExtention:(id)arg2;

@end

