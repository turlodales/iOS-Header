//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteView.h>

#import <WebKit/WKContentControlled-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKUIRemoteView : _UIRemoteView <WKContentControlled>
{
}

@property(readonly, copy) NSString *description;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

