//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WFActionSearchGroup : NSObject
{
    NSString *_identifier;
    NSString *_localizedName;
    NSArray *_actions;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 actions:(id)arg3;

@end

