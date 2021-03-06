//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNAvatarCardActionListController-Protocol.h>
#import <ContactsUI/CNUINavigationListViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIUserActionListConsumer-Protocol.h>

@class CNContact, NSArray, NSDictionary, NSString, UIViewController;
@protocol CNContactActionsControllerDelegate, CNUINavigationListStyle, CNUIUserActionListDataSource;

@interface CNContactActionsController : NSObject <CNAvatarCardActionListController, CNUINavigationListViewControllerDelegate, CNUIUserActionListConsumer>
{
    _Bool _shouldUseOutlinedActionGlyphStyle;
    CNContact *_contact;
    id <CNUIUserActionListDataSource> _actionsDataSource;
    NSDictionary *_modelsByActionTypes;
    NSArray *_modelCancelables;
    UIViewController *_viewController;
    id <CNContactActionsControllerDelegate> _delegate;
    id <CNUINavigationListStyle> _navigationListStyle;
    long long _actionsOrder;
    NSArray *_actionTypes;
}

+ (id)descriptorForRequiredKeys;
+ (id)supportedActionTypes;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *actionTypes; // @synthesize actionTypes=_actionTypes;
@property(nonatomic) long long actionsOrder; // @synthesize actionsOrder=_actionsOrder;
@property(nonatomic) __weak id <CNUINavigationListStyle> navigationListStyle; // @synthesize navigationListStyle=_navigationListStyle;
@property(nonatomic) __weak id <CNContactActionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSArray *modelCancelables; // @synthesize modelCancelables=_modelCancelables;
@property(copy, nonatomic) NSDictionary *modelsByActionTypes; // @synthesize modelsByActionTypes=_modelsByActionTypes;
@property(retain, nonatomic) id <CNUIUserActionListDataSource> actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool shouldUseOutlinedActionGlyphStyle; // @synthesize shouldUseOutlinedActionGlyphStyle=_shouldUseOutlinedActionGlyphStyle;
- (id)actionForItem:(id)arg1 withImage:(id)arg2;
- (void)generateMenuForItem:(id)arg1 image:(id)arg2 withCurrentList:(id)arg3;
- (void)prepareNavigationListItems;
- (id)navigationListItemForUserActionType:(id)arg1;
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;
- (id)imageForActionType:(id)arg1;
- (id)modelForActionType:(id)arg1;
- (void)cancelModels;
- (void)retrieveModels;
- (id)displayedController;
- (void)styleUpdated;
- (void)dealloc;
- (id)initWithContact:(id)arg1 dataSource:(id)arg2 actionTypes:(id)arg3;
- (id)initWithContact:(id)arg1 actionTypes:(id)arg2;
@property(nonatomic) _Bool actionsReversed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

