//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSString, PHAssetCollection, PHPhotoLibrary;
@protocol PGHighlightModelChangeRequest;

@protocol PGHighlightModel <NSObject>
+ (NSArray *)fetchParentDayGroupHighlightsForDayHighlights:(NSArray *)arg1;
@property(readonly, nonatomic) PHAssetCollection *assetCollection;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) _Bool isGroup;
@property(readonly, nonatomic, getter=isRecent) _Bool recent;
@property(nonatomic) unsigned short enrichmentState;
@property(nonatomic) unsigned short type;
- (id <PGHighlightModelChangeRequest>)changeRequest;
- (double)nonDefaultCurationScorePercentageForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)faceAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)sceneAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
@end

