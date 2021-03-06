//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACDataclassAction, NSArray, NSMutableArray;

@interface ACUIDataclassActionPicker : NSObject
{
    NSMutableArray *_affectedDataclasses;
    ACAccount *_affectedAccount;
    NSArray *_actions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ACAccount *affectedAccount; // @synthesize affectedAccount=_affectedAccount;
@property(copy, nonatomic) NSArray *affectedDataclasses; // @synthesize affectedDataclasses=_affectedDataclasses;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)descriptionForDataclassAction:(id)arg1;
- (id)_stringForMessage:(id)arg1 withAccountType:(id)arg2 dataclassDescription:(id)arg3;
- (id)message;
- (id)title;
- (id)showInViewController:(id)arg1;
@property(readonly, nonatomic) long long priorityIndex;
- (_Bool)hasActionOfType:(long long)arg1;
- (id)actionOfType:(long long)arg1;
@property(readonly, nonatomic) ACDataclassAction *firstDestructiveAction;
@property(readonly, nonatomic) _Bool hasDestructiveActions;
- (void)addAffectedDataclass:(id)arg1;
- (id)initWithActions:(id)arg1 affectingAccount:(id)arg2;

@end

