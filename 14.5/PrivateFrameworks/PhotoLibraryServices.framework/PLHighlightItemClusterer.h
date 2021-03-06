//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLHighlightItemClustererRule;

@interface PLHighlightItemClusterer : NSObject
{
    id <PLHighlightItemClustererRule> _rule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PLHighlightItemClustererRule> rule; // @synthesize rule=_rule;
- (id)processHighlightItems:(id)arg1 withRestoredHighlightItemLists:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:(id)arg1 deletedHighlightItems:(id)arg2 usingModelReader:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 restoreBlock:(CDUnknownBlockType)arg5;
- (id)initWithRule:(id)arg1;

@end

