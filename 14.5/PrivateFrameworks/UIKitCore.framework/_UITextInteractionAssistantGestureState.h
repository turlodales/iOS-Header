//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextInteractionAssistantGestureState : NSObject
{
    _Bool _hasExternalInteractions;
    _Bool _viewIsEditable;
    _Bool _viewCanBecomeEditable;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool viewCanBecomeEditable; // @synthesize viewCanBecomeEditable=_viewCanBecomeEditable;
@property(nonatomic) _Bool viewIsEditable; // @synthesize viewIsEditable=_viewIsEditable;
@property(nonatomic) _Bool hasExternalInteractions; // @synthesize hasExternalInteractions=_hasExternalInteractions;
- (_Bool)isEqual:(id)arg1;

@end

