//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <HomeUI/NSCopying-Protocol.h>

@class HFTriggerBuilder;

@interface HUShortcutItem : HFItem <NSCopying>
{
    _Bool _selectable;
    HFTriggerBuilder *_triggerBuilder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTriggerBuilder:(id)arg1 selectable:(_Bool)arg2;

@end

