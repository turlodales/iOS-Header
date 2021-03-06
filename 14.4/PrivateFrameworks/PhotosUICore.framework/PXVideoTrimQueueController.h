//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PLManagedAlbum, PLPhotoLibrary;
@protocol PXVideoTrimQueueControllerDelegate;

@interface PXVideoTrimQueueController : NSObject
{
    double _startTime;
    double _endTime;
    NSMutableArray *_sourcesToTransform;
    NSMutableArray *_trimQueue;
    NSMutableDictionary *_trimmedVideoInfo;
    struct {
        unsigned int hasWillTrim:1;
        unsigned int hasDidTrim:1;
        unsigned int hasDidFinish:1;
        unsigned int hasDidCancel:1;
    } _delegateFlags;
    PLPhotoLibrary *_photoLibrary;
    id <PXVideoTrimQueueControllerDelegate> _delegate;
    NSArray *_videosSources;
    NSDictionary *_videosSourcesSharingInfo;
    NSDictionary *_customExportsInfo;
    PLManagedAlbum *_album;
    NSString *_albumName;
    NSArray *_recipients;
    NSString *_commentText;
}

+ (id)videoInfoKeyForSource:(id)arg1;
+ (double)durationFromVideoAtURL:(id)arg1;
+ (id)photoLibraryFromSources:(id)arg1 album:(id)arg2;
+ (_Bool)areVideoSourcesStreamShareSources:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, nonatomic) PLManagedAlbum *album; // @synthesize album=_album;
@property(readonly, nonatomic) NSDictionary *trimmedVideoInfo; // @synthesize trimmedVideoInfo=_trimmedVideoInfo;
@property(readonly, nonatomic) NSDictionary *customExportsInfo; // @synthesize customExportsInfo=_customExportsInfo;
@property(readonly, nonatomic) NSDictionary *videosSourcesSharingInfo; // @synthesize videosSourcesSharingInfo=_videosSourcesSharingInfo;
@property(readonly, nonatomic) NSArray *videosSources; // @synthesize videosSources=_videosSources;
@property(nonatomic) __weak id <PXVideoTrimQueueControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cleanupResources;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)_sendDidFinish;
- (void)_trimVideoSource:(id)arg1;
- (id)_videoTooLongAlertController;
- (void)_dequeueTrimmingControl;
- (_Bool)_shouldShowVideoTooLongAlertForVideoSource:(id)arg1;
- (id)alternateSourceToUseIfNeededFromSource:(id)arg1;
- (void)_showTrimViewControllerForSource:(id)arg1;
- (void)_dismissViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentViewController:(id)arg1;
- (void)start;
- (id)initWithPhotoLibrary:(id)arg1 videoSources:(id)arg2 videoSourcesSharingInfo:(id)arg3 customExportsInfo:(id)arg4 album:(id)arg5;

@end

