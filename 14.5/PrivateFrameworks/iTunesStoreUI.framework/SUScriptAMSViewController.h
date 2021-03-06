//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString, SUScriptAccount;

@interface SUScriptAMSViewController : SUScriptViewController
{
    NSString *_DSID;
    NSString *_URL;
    SUScriptAccount *_primaryAccount;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SUScriptAccount *primaryAccount; // @synthesize primaryAccount=_primaryAccount;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
- (id)_className;
- (id)newNativeViewController;
- (id)initWithPrimaryAccount:(id)arg1;

@end

