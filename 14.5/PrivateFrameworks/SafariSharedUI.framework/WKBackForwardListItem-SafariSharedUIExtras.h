//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKBackForwardListItem.h>

#import <SafariSharedUI/WBSTranslationContextSnapshotStoring-Protocol.h>

@class NSString, WBSTranslationContextSnapshot;

@interface WKBackForwardListItem (SafariSharedUIExtras) <WBSTranslationContextSnapshotStoring>
@property(retain, nonatomic, setter=_safari_setTranslationContextSnapshot:) WBSTranslationContextSnapshot *_safari_translationContextSnapshot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

