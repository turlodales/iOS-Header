//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIConfirmationView : SAAceView
{
}

+ (id)confirmationViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)confirmationView;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *style;
@property(copy, nonatomic) NSString *denyText;
@property(copy, nonatomic) NSArray *denyCommands;
@property(copy, nonatomic) NSString *confirmText;
@property(copy, nonatomic) NSArray *confirmCommands;
@property(copy, nonatomic) NSString *cancelTrigger;
@property(copy, nonatomic) NSArray *allConfirmationOptions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

