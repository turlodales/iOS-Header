//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSItemProvider, _SFQuickLookDocumentView;

@protocol _SFQuickLookDocumentViewDelegate <NSObject>
- (long long)dataOwnerForQuickLookDocumentView:(_SFQuickLookDocumentView *)arg1;

@optional
- (NSItemProvider *)itemProviderForQuickLookDocumentView:(_SFQuickLookDocumentView *)arg1;
- (void)quickLookDocumentView:(_SFQuickLookDocumentView *)arg1 didSelectActionAtIndex:(long long)arg2;
@end

