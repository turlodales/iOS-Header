//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ControlContaineeViewController.h"

#import "ACDataSourceDelegate-Protocol.h"
#import "HeaderViewDelegate-Protocol.h"
#import "MacFooterViewDelegate-Protocol.h"
#import "UIKeyboardInput-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class DataSource, HairlineView, MacFooterView, ModalCardHeaderView, NSString, PassthruSearchBar, RecentlyViewedDataSource, SearchDataSource, ShortcutSuggestionsDataSource, UITableView, UITextField;

__attribute__((visibility("hidden")))
@interface AddFromACViewController : ControlContaineeViewController <UISearchBarDelegate, UITextFieldDelegate, UIKeyboardInput, HeaderViewDelegate, MacFooterViewDelegate, ACDataSourceDelegate>
{
    NSString *_inputText;
    ModalCardHeaderView *_modalHeaderView;
    PassthruSearchBar *_searchBar;
    UITextField *_searchField;
    DataSource *_currentDataSource;
    SearchDataSource *_searchDataSource;
    RecentlyViewedDataSource *_recentlyViewedDataSource;
    ShortcutSuggestionsDataSource *_suggestionsDataSource;
    HairlineView *_headerHairline;
    MacFooterView *_footerView;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)macFooterViewLeftButtonTapped:(id)arg1;
- (void)macFooterViewBackButtonTapped:(id)arg1;
- (void)macFooterViewRightButtonTapped:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setInputText:(id)arg1;
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;
- (void)dataSourceUpdated:(id)arg1;
- (void)searchDataSource:(id)arg1 addItem:(id)arg2;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;
- (void)headerViewButtonTapped:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handleItem:(id)arg1;
- (void)_updateHeaderHairline;
- (void)_enableTextFieldNotification:(_Bool)arg1;
- (void)updateDataSource;
@property(readonly, nonatomic) _Bool showsRecents;
- (id)emptyStateDataSource;
- (id)searchDataSource;
- (id)recentlyViewedDataSource;
- (id)suggestionsDataSource;
- (void)updateTheme;
- (void)_setPlaceHolder;
- (void)didResignCurrent;
- (void)didBecomeCurrent;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)saveShortcut:(id)arg1;
- (void)saveMapItem:(id)arg1;
@property(readonly, nonatomic) int requestSource;
@property(readonly, nonatomic) NSString *headerTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

