//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBFolderControllerConfiguration.h>

@class SBHLibraryCategoriesRootFolder, SBHLibraryCategoryMapProvider;

@interface SBHLibraryPodFolderControllerConfiguration : SBFolderControllerConfiguration
{
    SBHLibraryCategoriesRootFolder *_categoriesFolder;
    SBHLibraryCategoryMapProvider *_categoryMapProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBHLibraryCategoryMapProvider *categoryMapProvider; // @synthesize categoryMapProvider=_categoryMapProvider;
@property(retain, nonatomic) SBHLibraryCategoriesRootFolder *categoriesFolder; // @synthesize categoriesFolder=_categoriesFolder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

