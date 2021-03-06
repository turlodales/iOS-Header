//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPOperation.h>

#import <FileProvider/FPOperationProgressDelegate-Protocol.h>

@class FPItemManager, NSArray, NSMutableArray, NSOperationQueue, NSString;

@interface FPFetchThumbnailsOperation : FPOperation <FPOperationProgressDelegate>
{
    NSArray *_items;
    struct CGSize _desiredSize;
    double _screenScale;
    FPItemManager *_itemManager;
    NSOperationQueue *_subOperationQueue;
    NSMutableArray *_subOperations;
    CDUnknownBlockType _perThumbnailCompletionBlock;
    CDUnknownBlockType _thumbnailsFetchCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType thumbnailsFetchCompletionBlock; // @synthesize thumbnailsFetchCompletionBlock=_thumbnailsFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perThumbnailCompletionBlock; // @synthesize perThumbnailCompletionBlock=_perThumbnailCompletionBlock;
- (void)_perItemCompletionBlockFor:(id)arg1 thumbnail:(id)arg2 contentType:(id)arg3 error:(id)arg4;
- (void)operation:(id)arg1 didReceiveProgressInfo:(id)arg2 error:(id)arg3;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)main;
- (id)initWithItems:(id)arg1 desiredSize:(struct CGSize)arg2 screenScale:(double)arg3 itemManager:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

