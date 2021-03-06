//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableArray, NSString, SUNavigationContainerViewController, SUScriptNavigationItem;

@interface SUScriptNavigationTransition : SUScriptObject
{
    long long _status;
    NSString *_title;
    SUNavigationContainerViewController *_container;
    long long _fromIndex;
    long long _toIndex;
    NSString *_rightBarButton;
    NSMutableArray *_finishBlocks;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *finishBlocks; // @synthesize finishBlocks=_finishBlocks;
@property(retain, nonatomic) NSString *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_className;
- (void)finishedLoading;
@property(retain, nonatomic) SUScriptNavigationItem *topNavigationItem;
@property(nonatomic) long long toIndex; // @synthesize toIndex=_toIndex;
@property(nonatomic) long long fromIndex; // @synthesize fromIndex=_fromIndex;
@property(nonatomic) long long status;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (id)initWithContainer:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

@end

