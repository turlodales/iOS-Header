//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer
{
    NSURL *_publishedURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *publishedURL; // @synthesize publishedURL=_publishedURL;
- (void)cancelActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isCancellable;
- (void)_completePublishActionWithSuccess:(_Bool)arg1 error:(id)arg2 shareOrigin:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)performPublishActionWithSession:(id)arg1 shareOrigin:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createActionProgress;

@end

