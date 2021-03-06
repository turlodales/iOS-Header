//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SRAppInfoPlistHelper, UITableView;

@interface SRAuthorizationCommonUI : NSObject
{
    NSString *_authCategory;
    NSDictionary *_info;
    SRAppInfoPlistHelper *_plistHelper;
    UITableView *_tableView;
    NSString *_authGroup;
}

+ (id)sortedServices:(id)arg1;
+ (id)prepareDeleteAllCellForTableView:(id)arg1;
+ (id)appIcon:(id)arg1 imageDescriptor:(id)arg2;
+ (id)imageDescriptorForAuthorization;
+ (id)prepareSwitchCellForIndexPath:(id)arg1 title:(id)arg2 state:(id)arg3 delegate:(id)arg4 tableView:(id)arg5;
+ (id)userFacingNameForAuthGroup:(id)arg1;
+ (id)platformsIcon:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *authGroup; // @synthesize authGroup=_authGroup;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SRAppInfoPlistHelper *plistHelper; // @synthesize plistHelper=_plistHelper;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *authCategory; // @synthesize authCategory=_authCategory;
- (id)prepareExampleSample;
- (id)prepareSwitchCellForIndexPath:(id)arg1 state:(id)arg2 delegate:(id)arg3;
- (id)requiredAuthorizationAlertIfNeccesaryForBundle:(id)arg1 title:(id)arg2 message:(id)arg3 destructiveButtonTitle:(id)arg4 destructiveHandler:(CDUnknownBlockType)arg5 cancelButtonTitle:(id)arg6 cancelHandler:(CDUnknownBlockType)arg7;
- (id)requiredAuthorizationRevokeAlertIfNeccesaryForBundle:(id)arg1 indexPath:(id)arg2 destructiveHandler:(CDUnknownBlockType)arg3;
- (id)requiredAuthorizationAlertIfNeccesaryForBundle:(id)arg1 authCategory:(id)arg2 destructiveHandler:(CDUnknownBlockType)arg3;
- (id)prepareSelectionCell:(_Bool)arg1;
- (id)prepareDataSampleCell;
- (id)prepareDetailCellTitleFont:(id)arg1 bodyFont:(id)arg2 textColor:(id)arg3 OBKStyle:(_Bool)arg4;
- (id)prepareGeneralInfoCell;
- (id)authGroupUserFacingName;
- (id)platforms;
- (id)prepareAuthGroupDescriptionImageView:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithAuthGroup:(id)arg1 bundle:(id)arg2 tableView:(id)arg3;

@end

