//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXInboxPreviewItem;

@protocol PXInboxModelMediaProvider <NSObject>
- (int)requestImageForPreviewItem:(id <PXInboxPreviewItem>)arg1 targetSize:(struct CGSize)arg2 resultHandler:(void (^)(UIImage *, NSError *))arg3;
@end

