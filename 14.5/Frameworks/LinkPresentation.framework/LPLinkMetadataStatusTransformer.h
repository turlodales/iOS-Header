//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPLinkMetadata, NSAttributedString, NSURL;
@protocol LPLinkMetadataStatusTransformerDelegate;

@interface LPLinkMetadataStatusTransformer : NSObject
{
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    _Bool _wantsStatusItem;
    id <LPLinkMetadataStatusTransformerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wantsStatusItem; // @synthesize wantsStatusItem=_wantsStatusItem;
@property(nonatomic) __weak id <LPLinkMetadataStatusTransformerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSURL *canonicalURL;
- (id)originalURL;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSAttributedString *statusText;
- (void)dealloc;
- (id)initWithMetadata:(id)arg1 URL:(id)arg2;

@end

