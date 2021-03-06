//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class UNNotificationResponse;

@interface UISNotificationResponseAction : BSAction
{
    UNNotificationResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UNNotificationResponse *response; // @synthesize response=_response;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)UIActionType;
- (id)_trigger;
@property(readonly, nonatomic) _Bool isDefaultAction;
@property(readonly, nonatomic) _Bool isRemote;
@property(readonly, nonatomic) _Bool isLocal;
- (id)initWithResponse:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end

