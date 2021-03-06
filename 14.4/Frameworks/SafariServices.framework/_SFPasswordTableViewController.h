//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <SafariServices/UISearchBarDelegate-Protocol.h>
#import <SafariServices/UISearchControllerDelegate-Protocol.h>
#import <SafariServices/UISearchResultsUpdating-Protocol.h>
#import <SafariServices/_SFPasswordIconControllerDelegate-Protocol.h>

@class NSCountedSet, NSString, UISearchController, _SFPasswordIconController, _SFPasswordTableConfiguration;

__attribute__((visibility("hidden")))
@interface _SFPasswordTableViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, _SFPasswordIconControllerDelegate>
{
    _SFPasswordIconController *_iconController;
    NSCountedSet *_visibleDomains;
    UISearchController *_searchController;
    _SFPasswordTableConfiguration *_configuration;
    NSString *_searchPattern;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
- (void)searchPatternDidUpdate;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)_updateIconForDomain:(id)arg1 forCell:(id)arg2;
- (void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 previewForIndexPath:(id)arg2;
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)handleContextMenuDeleteForIndexPath:(id)arg1;
- (void)shareSavedPassword:(id)arg1 modalPresentationSourceView:(id)arg2;
@property(retain, nonatomic) NSString *searchQuery;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1 siteMetadataManager:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

