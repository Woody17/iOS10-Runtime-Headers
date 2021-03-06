/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouGroupsConfiguration : NSObject {
    NSString * _configuration;
    unsigned long long  _coverArticlesPosition;
    unsigned long long  _coverArticlesPrecedingGroupsCount;
    unsigned long long  _editorialPosition;
    unsigned long long  _editorialPrecedingGroupsCount;
    unsigned long long  _topStoriesPosition;
    unsigned long long  _topStoriesPrecedingGroupsCount;
    unsigned long long  _trendingStoriesPosition;
    unsigned long long  _trendingStoriesPrecedingGroupsCount;
}

@property (nonatomic, readonly) unsigned long long coverArticlesPosition;
@property (nonatomic, readonly) unsigned long long coverArticlesPrecedingGroupsCount;
@property (nonatomic, readonly) unsigned long long editorialPosition;
@property (nonatomic, readonly) unsigned long long editorialPrecedingGroupsCount;
@property (nonatomic, readonly) unsigned long long topStoriesPosition;
@property (nonatomic, readonly) unsigned long long topStoriesPrecedingGroupsCount;
@property (nonatomic, readonly) unsigned long long trendingStoriesPosition;
@property (nonatomic, readonly) unsigned long long trendingStoriesPrecedingGroupsCount;

- (void).cxx_destruct;
- (unsigned long long)coverArticlesPosition;
- (unsigned long long)coverArticlesPrecedingGroupsCount;
- (unsigned long long)editorialPosition;
- (unsigned long long)editorialPrecedingGroupsCount;
- (unsigned long long)hash;
- (id)initWithJSONConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)topStoriesPosition;
- (unsigned long long)topStoriesPrecedingGroupsCount;
- (unsigned long long)trendingStoriesPosition;
- (unsigned long long)trendingStoriesPrecedingGroupsCount;

@end
