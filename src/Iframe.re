/*
 url (required) - string the iframe url

 position (optional) - string defaults to "absolute".

 id (optional) - string if set, adds the id parameter with the given value.

 className (optional) - string if set, adds the class parameter with the given value.

 display (optional) - string defaults to "block"

 height (optional) - string (1px > any number above 0, or 1% to 100%)

 width (optional) - string (1px > any number above 0, or 1% to 100%)

 allowFullScreen (optional) - if set, applies the allowFullScreen param

 styles (optional) - add any additional styles here. Will (intentionally) override any of the props above. For instance:

 sandbox (optional) - add optional sandbox values ("allow-forms allow-pointer-lock allow-popups allow-same-origin allow-scripts allow-top-navigation")

 allow (optional) - add optional allow values ("geolocation microphone camera midi encrypted-media")
 */

module Frame = {
  [@bs.module "react-iframe"] [@react.component]
  external make:
    (
      ~url: string,
      ~position: string=?,
      ~id: string=?,
      ~className: string=?,
      ~display: string=?,
      ~height: string=?,
      ~width: string=?,
      ~allowFullScreen: bool=?,
      ~styles: ReactDOMRe.Style.t=?,
      ~style: ReactDOMRe.Style.t=?,
      ~sandbox: [@bs.string] [
                  | [@bs.as "allow-modals"] `AllowModals
                  | [@bs.as "allow-forms"] `AllowForms
                  | [@bs.as "allow-pointer-lock"] `AllowPointerLock
                  | [@bs.as "allow-popups"] `AllowPopups
                  | [@bs.as "allow-same-origin"] `AllowSameOrigin
                  | [@bs.as "allow-scripts"] `AllowScripts
                  | [@bs.as "allow-top-navigation"] `AllowTopNavigation
                ]
                  =?,
      ~allow: bool=?,
      _unit
    ) =>
    React.element =
    "default";
};