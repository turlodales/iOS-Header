//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSEditableTableCell.h>

@class NSString, UILabel;

@interface KeychainSyncSecurityCodeCell : PSEditableTableCell
{
    UILabel *_bulletTextLabel;
    int _securityCodeType;
    int _mode;
    NSString *_firstPasscodeEntry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *firstPasscodeEntry; // @synthesize firstPasscodeEntry=_firstPasscodeEntry;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) int securityCodeType; // @synthesize securityCodeType=_securityCodeType;
- (void)layoutSubviews;
- (void)setBulletText:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

@end

